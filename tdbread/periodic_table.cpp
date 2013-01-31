#include "periodic_table.h"

std::map<std::string,element_data> create_periodic_table()
{
          std::map<std::string,element_data> m;
		  m["/-"]   = element_data("/-","ELECTRON_GAS",-3);	// special for Thermo-Calc
		  m["/+"]   = element_data("/+","POSITRON_GAS",-2);	// special for Thermo-Calc
		  m["ZE"]   = element_data("ZE","UNIT_CHARGE",-1);	// special for Thermo-Calc
		  m["VA"]   = element_data("VA","VACUUM",0);		// special for Thermo-Calc
		  m["H"]    = element_data("H", "Hydrogen", 1);
		  m["HE"]   = element_data("HE", "Helium", 2);
		  m["LI"]   = element_data("LI", "Lithium", 3);
		  m["BE"]   = element_data("BE", "Beryllium", 4);
		  m["B"]    = element_data("B", "Boron", 5);
		  m["C"]    = element_data("C", "Carbon", 6);
		  m["N"]    = element_data("N", "Nitrogen", 7);
		  m["O"]    = element_data("O", "Oxygen", 8);
		  m["F"]    = element_data("F", "Fluorine", 9);
		  m["NE"]   = element_data("NE", "Neon", 10);
		  m["NA"]   = element_data("NA", "Sodium", 11);
		  m["MG"]   = element_data("MG", "Magnesium", 12);
		  m["AL"]   = element_data("AL", "Aluminum", 13);
		  m["SI"]   = element_data("SI", "Silicon", 14);
		  m["P"]    = element_data("P", "Phosphorus", 15);
		  m["S"]    = element_data("S", "Sulfur", 16);
		  m["CL"]   = element_data("CL", "Chlorine", 17);
		  m["AR"]   = element_data("AR", "Argon", 18);
		  m["K"]    = element_data("K", "Potassium", 19);
		  m["CA"]   = element_data("CA", "Calcium", 20);
		  m["SC"]   = element_data("SC", "Scandium", 21);
		  m["TI"]   = element_data("TI", "Titanium", 22);
		  m["V"]    = element_data("V", "Vanadium", 23);
		  m["CR"]   = element_data("CR", "Chromium", 24);
		  m["MN"]   = element_data("MN", "Manganese", 25);
		  m["FE"]   = element_data("FE", "Iron", 26);
		  m["CO"]   = element_data("CO", "Cobalt", 27);
		  m["NI"]   = element_data("NI", "Nickel", 28);
		  m["CU"]   = element_data("CU", "Copper", 29);
		  m["ZN"]   = element_data("ZN", "Zinc", 30);
		  m["GA"]   = element_data("GA", "Gallium", 31);
		  m["GE"]   = element_data("GE", "Germanium", 32);
		  m["AS"]   = element_data("AS", "Arsenic", 33);
		  m["SE"]   = element_data("SE", "Selenium", 34);
		  m["BR"]   = element_data("BR", "Bromine", 35);
		  m["KR"]   = element_data("KR", "Krypton", 36);
		  m["RB"]   = element_data("RB", "Rubidium", 37);
		  m["SR"]   = element_data("SR", "Strontium", 38);
		  m["Y"]    = element_data("Y", "Yttrium", 39);
		  m["ZR"]   = element_data("ZR", "Zirconium", 40);
		  m["NB"]   = element_data("NB", "Niobium", 41);
		  m["MO"]   = element_data("MO", "Molybdenum", 42);
		  m["TC"]   = element_data("TC", "Technetium", 43);
		  m["RU"]   = element_data("RU", "Ruthenium", 44);
		  m["RH"]   = element_data("RH", "Rhodium", 45);
		  m["PD"]   = element_data("PD", "Palladium", 46);
		  m["AG"]   = element_data("AG", "Silver", 47);
		  m["CD"]   = element_data("CD", "Cadmium", 48);
		  m["IN"]   = element_data("IN", "Indium", 49);
		  m["SN"]   = element_data("SN", "Tin", 50);
		  m["SB"]   = element_data("SB", "Antimony", 51);
		  m["TE"]   = element_data("TE", "Tellurium", 52);
		  m["I"]    = element_data("I", "Iodine", 53);
		  m["XE"]   = element_data("XE", "Xenon", 54);
		  m["CS"]   = element_data("CS", "Cesium", 55);
		  m["BA"]   = element_data("BA", "Barium", 56);
		  m["LA"]   = element_data("LA", "Lanthanum", 57);
		  m["CE"]   = element_data("CE", "Cerium", 58);
		  m["PR"]   = element_data("PR", "Praseodymium", 59);
		  m["ND"]   = element_data("ND", "Neodymium", 60);
		  m["PM"]   = element_data("PM", "Promethium", 61);
		  m["SM"]   = element_data("SM", "Samarium", 62);
		  m["EU"]   = element_data("EU", "Europium", 63);
		  m["GD"]   = element_data("GD", "Gadolinium", 64);
		  m["TB"]   = element_data("TB", "Terbium", 65);
		  m["DY"]   = element_data("DY", "Dysprosium", 66);
		  m["HO"]   = element_data("HO", "Holmium", 67);
		  m["ER"]   = element_data("ER", "Erbium", 68);
		  m["TM"]   = element_data("TM", "Thulium", 69);
		  m["YB"]   = element_data("YB", "Ytterbium", 70);
		  m["LU"]   = element_data("LU", "Lutetium", 71);
		  m["HF"]   = element_data("HF", "Hafnium", 72);
		  m["TA"]   = element_data("TA", "Tantalum", 73);
		  m["W"]    = element_data("W", "Tungsten", 74);
		  m["RE"]   = element_data("RE", "Rhenium", 75);
		  m["OS"]   = element_data("OS", "Osmium", 76);
		  m["IR"]   = element_data("IR", "Iridium", 77);
		  m["PT"]   = element_data("PT", "Platinum", 78);
		  m["AU"]   = element_data("AU", "Gold", 79);
		  m["HG"]   = element_data("HG", "Mercury", 80);
		  m["TL"]   = element_data("TL", "Thallium", 81);
		  m["PB"]   = element_data("PB", "Lead", 82);
		  m["BI"]   = element_data("BI", "Bismuth", 83);
		  m["PO"]   = element_data("PO", "Polonium", 84);
		  m["AT"]   = element_data("AT", "Astatine", 85);
		  m["RN"]   = element_data("RN", "Radon", 86);
		  m["FR"]   = element_data("FR", "Francium", 87);
		  m["RA"]   = element_data("RA", "Radium", 88);
		  m["AC"]   = element_data("AC", "Actinium", 89);
		  m["TH"]   = element_data("TH", "Thorium", 90);
		  m["PA"]   = element_data("PA", "Protactinium", 91);
		  m["U"]    = element_data("U", "Uranium", 92);
		  m["NP"]   = element_data("NP", "Neptunium", 93);
		  m["PU"]   = element_data("PU", "Plutonium", 94);
		  m["AM"]   = element_data("AM", "Americium", 95);
		  m["CM"]   = element_data("CM", "Curium", 96);
		  m["BK"]   = element_data("BK", "Berkelium", 97);
		  m["CF"]   = element_data("CF", "Californium", 98);
		  m["ES"]   = element_data("ES", "Einsteinium", 99);
		  m["FM"]   = element_data("FM", "Fermium", 100);
		  m["MD"]   = element_data("MD", "Mendelevium", 101);
		  m["NO"]   = element_data("NO", "Nobelium", 102);
		  m["LR"]   = element_data("LR", "Lawrencium", 103);
		  m["RF"]   = element_data("RF", "Rutherfordium", 104);
		  m["DB"]   = element_data("DB", "Dubnium", 105);
		  m["SG"]   = element_data("SG", "Seaborgium", 106);
		  m["BH"]   = element_data("BH", "Bohrium", 107);
		  m["HS"]   = element_data("HS", "Hassium", 108);
		  m["MT"]   = element_data("MT", "Meitnerium", 109);
		  m["DS"]   = element_data("DS", "Darmstadtium", 110);
		  m["RG"]   = element_data("RG", "Roentgenium", 111);
		  m["CN"]   = element_data("CN", "Copernicium", 112);
		  m["UUT"]  = element_data("UUT", "Ununtrium", 113);
		  m["FL"]   = element_data("FL", "Flerovium", 114);
		  m["UUP"]  = element_data("UUP", "Ununpentium", 115);
		  m["LV"]   = element_data("LV", "Livermorium", 116);
		  m["UUS"]  = element_data("UUS", "Ununseptium", 117);
		  m["UUO"]  = element_data("UUO", "Ununoctium", 118);

          return m;
}

extern std::map<std::string,element_data> periodic_table_elements = create_periodic_table();