from time import time


def time_taking(num1, num2, num3):
    print(num1 + num2 + num3)


start_time = time()

func = lambda: time_taking(5, 6, 4)
for i in range(100000):
    func()

speed = time() - start_time
print(speed)
