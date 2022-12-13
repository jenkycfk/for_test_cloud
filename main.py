import os
import argparse
from time import sleep

def main(loop):
    for idx in range(0, loop):
        print("loop {}".format(idx))
        sleep(1)

if __name__ == '__main__':
    parser = argparse.ArgumentParser(description='Process some parameters.')
    parser.add_argument('--times', metavar='N', type=int, nargs='+', help='an integer for the accumulator')
    args = parser.parse_args()
    print(args.times)
    times = args.times[0]
    main(times)
