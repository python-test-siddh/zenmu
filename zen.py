import zenmu
print(zenmu)
print(zenmu.zenmu)
_a=b'\x01'
z=zenmu.zenmu(_a)
print(z)
print(type(z))
for _i in z:
  print(z[_i])

