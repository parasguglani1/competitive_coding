import os

while 1:
    # os.system('./generator ' + str(seed) + ' > input.txt')
    os.system('./generator > input.txt')
    os.system('./mpn_j < input.txt > bruteforce.txt')
    os.system('./B_Mastering_Prime_Numbers < input.txt > fast_solution.txt')
    if open('bruteforce.txt').read() != open('fast_solution.txt').read():
        print('WA')
        exit(0)
