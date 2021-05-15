#!/usr/bin/python3
if __name__ == "__main__":
    import crackme4
    import dis

symbols = dir(crackme4)

for i in symbols:
    print("{}".format(i))

print("{}".format(crackme4.ok))

dis.dis()
