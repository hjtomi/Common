import warnings


class Node:
    def __init__(self, data):
        self.data = data
        self.back = None
        self.next = None


class DoubleLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    def display(self):
        dll_data = []
        if self.head:
            node = self.head
            dll_data.append(node.data)
            while node.next:
                node = node.next
                dll_data.append(node.data)

            print(dll_data)

        else:
            print([])

    def insert_front(self, data):
        new_node = Node(data)
        new_node.next = self.head
        self.head = new_node

        if not self.tail:
            self.tail = new_node
        else:
            new_node.next.back = new_node

    def insert_back(self, data):
        new_node = Node(data)
        new_node.back = self.tail
        self.tail = new_node

        if not self.head:
            self.head = new_node
        else:
            self.tail.back.next = new_node

    def insert(self, place: int, data):
        node = self.head
        for i in range(place - 1):
            if node.next:
                node = node.next
            else:
                print("Invalid place")

        new_node = Node(data)
        new_node.next = node.next
        new_node.back = node

        node.next.back = new_node
        node.next = new_node

    def del_front(self):
        if self.head:
            to_return = self.head
            if self.head.next:
                self.head = self.head.next
                del self.head.back
                self.head.back = None

            else:
                del self.head
                self.head = None
                self.tail = None

            return to_return

        warnings.warn("Nothing to delete")

    def del_back(self):
        if self.tail:
            to_return = self.tail
            if self.tail.back:
                self.tail = self.tail.back
                del self.tail.next
                self.tail.next = None

            else:
                del self.tail
                self.tail = None
                self.head = None

            return to_return

        warnings.warn("Nothing to delete")

    def delete(self, place: int):
        if self.head:
            node = self.head
            for i in range(place - 1):
                if node.next:
                    node = node.next
                else:
                    raise IndexError(f"{place} not in DoubleLinkedList")

            to_return = node.next

            node.next = node.next.next
            del node.next.back
            node.next.back = node

            return to_return

    def search(self, place):
        node = self.head
        for i in range(place):
            node = node.next

        return node.data


if __name__ == '__main__':
    dll = DoubleLinkedList()
    dll.insert_front('Bob')
    dll.insert_front('John')
    dll.insert_front('Wally')

    dll.del_back()

    dll.display()
