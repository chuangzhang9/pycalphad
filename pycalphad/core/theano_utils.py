"""
This module manages interactions with Theano.
"""

import theano
from theano import tensor as tt
import sympy
import sympy.printing.theanocode
from itertools import chain

# Hot patch required for sympy<0.7.7
mapping = sympy.printing.theanocode.mapping
mapping[sympy.And] = tt.and_
mapping[sympy.Or] = tt.or_

global_cache = {}


class TheanoPrinter(sympy.printing.theanocode.TheanoPrinter):
    def _print_Symbol(self, s, dtypes={}, broadcastables={}, dims=tuple(), alloc=False):
        dtype = dtypes.get(s, 'floatX')
        broadcastable = broadcastables.get(s, ())
        key = (s.name, dtype, broadcastable, type(s), alloc)
        if key in self.cache:
            #print('Cache hit: ', key)
            #print('Current cache: ', self.cache)
            return self.cache[key]
        else:
            #print('Cache miss: ', key)
            #print('Current cache: ', self.cache)
            value = tt.tensor(name=s.name, dtype='floatX', broadcastable=broadcastable)
            self.cache[key] = value
            if alloc:
                self.cache[key] = tt.alloc(*chain([value], dims))
            else:
                self.cache[key] = value
            return self.cache[key]

    def _print_Number(self, n, **kwargs):
        return float(n)


def theano_code(expr, cache=global_cache, **kwargs):
    return TheanoPrinter(cache=cache, settings={}).doprint(expr, **kwargs)