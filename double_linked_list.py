class Node:
    def __init__(self, data):
        self.data = data
        self.back = None
        self.next = None


class DoubleLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    def insert_front(self, data):
        new_node = Node(data)
        new_node.next = self.head
        self.head = new_node

        if not self.tail:
            self.tail = new_node

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
        if self.head.next:
            self.head = self.head.next
            del self.head.back
            self.head.back = None

        else:
            del self.head
            self.head = None

    def del_back(self):
        if self.tail.back:
            self.tail = self.tail.back
            del self.tail.next
            self.tail.next = None

        else:
            del self.tail
            self.tail = None

    def delete(self, place: int):
        node = self.head
        for i in range(place - 1):
            node = node.next

        node.next = node.next.next
        del node.next.back
        node.next.back = node

    def search(self, place):
        node = self.head
        for i in range(place):
            node = node.next

        return node.data


if __name__ == '__main__':
    dll = DoubleLinkedList()
    dll.insert_front("I")
    dll.insert_back("you")
    dll.insert(1, "love")

    print(dll.search(0))
    print(dll.search(1))
    print(dll.search(2))
