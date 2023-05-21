from double_linked_list import DoubleLinkedList


class Stack:
    def __init__(self):
        self.stack = DoubleLinkedList()

    def display(self):
        self.stack.display()

    def push(self, *args):
        for data in args:
            self.stack.insert_back(data)

    def pop(self, amount: int = 1):
        return self.stack.del_back()


if __name__ == '__main__':
    stack = Stack()
    stack.push(2)
    stack.push(3)
    stack.push(4)
    stack.push(5)

    stack.pop()
    stack.push(5)
    stack.pop()
    stack.pop()
    stack.push(2)
    stack.pop()
    stack.pop()
    stack.push(4)

    stack.display()
