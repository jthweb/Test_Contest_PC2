from decimal import *
n = int(input())
m = Decimal(n/4).quantize(Decimal('1.'),rounding=ROUND_UP)
print(m)