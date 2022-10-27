# Solution Template

import sys


def solve(multilineInput):
    print("The solution is 1")


if __name__ == '__main__':
    if len(sys.argv) < 2:
        print("command line args missing")
    else:
        multilineInput = sys.argv[1].split('\n')
        solve(multilineInput)
