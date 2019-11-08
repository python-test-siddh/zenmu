from distutils.core import setup, Extension
MOD = "zenmu"
setup(name = MOD, ext_modules = [Extension(MOD,sources=[MOD+'.c'])],
description = "My C Extension Module")
