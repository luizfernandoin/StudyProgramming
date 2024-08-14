package Collections.List;

class Node<T> {
    T data;
    Node<T> next;

    public Node(T data) {
        this.data = data;
        this.next = null;
    }
}


public class LinkedList<T> {
    private Node<T> head;
    private Node<T> tail;

    public LinkedList() {
        this.head = null;
        this.tail = this.head;
    }

    public int lenLinkedList() {
        Node<T> current = head;
        int totNode = 0;

        while (current != null) {
            current = current.next;
            totNode++;
        }

        return totNode;
    }

    public void addLast(T data) {
        Node<T> newNode = new Node<>(data);

        if (head == null) {
            this.head = newNode;
        } else {
            Node<T> current = head;
            while (current.next != null) {
                current = current.next;
            }

            current.next = newNode;
            this.tail = newNode;
        }
    }

    public void add(int index, T data) {
        if (index == lenLinkedList()) {
            addLast(data);
            return;
        }


        Node<T> current = head;
        Node<T> newNode = new Node<>(data);

        for (int i = 1; i < index; i++) {
            if (i == 1) {
                current = head;
                continue;
            }

            current = current.next;
        }

        newNode.next = current.next;
        current.next = newNode;
    }

    public void addFirst(T data) {
        Node<T> newNodo = new Node<>(data);

        if (head == null) {
            head = newNodo;
            return;
        }

        newNodo.next = head;
        head = newNodo;
    }

    public Node<T> removeLast() {
        Node<T> current = head;
        while (current.next != getTail()) {
            current = current.next;
        }
        current.next = null;

        return getTail();
    }

    public Node<T> removeFirst() {
        Node<T> current = this.head;
        this.head = this.head.next;

        return current;
    }

    public void printLinkedList() {
        Node<T> current = head;
        while (current != null) {
            System.out.print(current.data + " -> ");
            current = current.next;
        }
        System.out.println("null");
    }

    public Node<T> getTail() {
        return this.tail;
    }
}

class Main {
    public static void main(String[] args) {
        LinkedList<Integer> list = new LinkedList<>();

        list.addLast(1);
        list.addLast(2);
        list.addFirst(5);
        list.addLast(3);
        list.addFirst(4);
        list.printLinkedList();

        list.add(5, 10);
        list.printLinkedList();

        System.out.println(list.removeLast().data);
        System.out.println(list.removeFirst().data);
        list.printLinkedList();
    }
}