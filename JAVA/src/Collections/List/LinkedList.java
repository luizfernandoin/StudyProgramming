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

    public LinkedList() {
        this.head = null;
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
        }
    }

    public void add(int index, T data) {
        Node<T> current = current = head;
        Node<T> newNode = new Node<>(data);

        for (int i = 0; i < index; i++) {
            current = current.next;
        }

        newNode = current.next;
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

    public void printLinkedList() {
        Node<T> current = head;
        while (current != null) {
            System.out.print(current.data + " -> ");
            current = current.next;
        }
        System.out.println("null");
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
        list.add(2, 5);

        list.printLinkedList();
    }
}