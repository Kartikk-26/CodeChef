# cook your dish here
import math


T = int(input())


for _ in range(T):
    
    X = int(input())
    
    
    insurances = math.ceil(100 / (X * 0.2))
    
    # Print the result for this test case
    print(insurances)
