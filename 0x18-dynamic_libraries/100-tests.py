import ctypes

# Load the dynamic library
ops = ctypes.CDLL('./build/100-operations.so')

# Test the functions
print(f"10 + 5 = {ops.add(10, 5)}")
print(f"10 - 5 = {ops.sub(10, 5)}")
print(f"10 * 5 = {ops.mul(10, 5)}")
print(f"10 / 5 = {ops.div(10, 5)}")
print(f"10 % 5 = {ops.mod(10, 5)}")
