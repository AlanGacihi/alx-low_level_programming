import random
import ctypes

cops = ctypes.CDLL('./libthre.so')
a = random.randint(-111, 111)
b = random.randint(-111, 111)
print(cops._puts("Hello"))