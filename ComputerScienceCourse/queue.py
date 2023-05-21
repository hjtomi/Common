from double_linked_list import DoubleLinkedList


class Queue:
    def __init__(self):
        self.queue = DoubleLinkedList()

    def display(self):
        self.queue.display()

    def enqueue(self, *args):
        for data in args:
            self.queue.insert_front(data)

    def dequeue(self):
        return self.queue.del_back()


if __name__ == '__main__':
    queue = Queue()
    queue.enqueue("Bob", 'John', 'Jessie')

    queue.dequeue()
    queue.dequeue()
    queue.dequeue()
    queue.dequeue()

    queue.display()
