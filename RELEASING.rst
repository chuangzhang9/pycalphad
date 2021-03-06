Releasing pycalphad
===================

When releasing a new version of pycalphad:

1. All pull requests / issues tagged with the upcoming version milestone should be resolved or deferred.
2. ``git pull`` to make sure you haven't missed any last-minute commits. **After this point, nothing else is making it into this version.**
   A minor release can be done later if something important is missed.
3. Ensure that all tests pass locally on develop. Feature tests which are deferred to a future
   milestone should be marked with the ``SkipTest`` decorator.
4. Regenerate the API documentation with ``sphinx-apidoc -o docs/api/ pycalphad/``
5. Resolve differences and commit the updated API documentation to the develop branch of the repository.
6. ``git push`` and verify all tests pass on all CI services.
7. Generate a list of commits since the last version with ``git log --oneline --decorate --color 0.1^..origin/develop``
   Replace ``0.1`` with the tag of the last public version.
8. Condense the change list into something user-readable. Update and commit CHANGES.rst with the release date.
9. ``git checkout master``

   ``git merge develop`` (merge commits unnecessary for now)
10. ``git stash``

   ``git tag -s 0.2 master -m "Version 0.2"`` Replace ``0.2`` with the new version. pycalphad should be signed with GPG key **3E69 6F32 5089 C0B3 3332  7A2D 52E6 1AB5 47C3 FD9B**.
   If you are using a hardware token on Linux, you may need to ``killall -1 gpg-agent`` for it to be detected.

   ``git show 0.2`` to ensure the correct commit was tagged and signed

   ``git tag -v 0.2`` to verify the GPG signature

   ``git push origin master --tags``

   ``git stash pop``
11. The new version is tagged in the repository. Now the public package must be built and distributed.

Uploading to PyPI
-----------------
1. ``rm -R dist/*`` on Linux/OSX or ``del dist/*`` on Windows
2. With the commit checked out which was tagged with the new version:
   ``python setup.py sdist``

   **Make sure that the script correctly detected the new version exactly and not a dirty / revised state of the repo.**

   Assuming a correctly configured .pypirc:
   ``gpg --output dist/pycalphad-0.2.tar.gz.asc --armor --detach-sig dist/pycalphad-0.2.tar.gz``

   ``twine upload -r pypi -u rotis dist/*``

Uploading to conda-forge
------------------------
Start with the commit checked out which was tagged with the new version.

1. Generate the SHA256 hash of the build artifact (tarball) submitted to PyPI.
2. Fork the conda-forge/pycalphad-feedstock repo.
3. Update the version and sha256 strings in the recipe/meta.yaml file.
4. Submit a pull request to the main pycalphad feedstock repo.
5. Once the tests pass, merge the pull request.
