class Node {
    int data;
    Node next;

    Node(int x) {
        data = x;
        next = null;
    }

}

public class Main {
    public static void main(String[] args) {
        Node head = new Node(1);
        head.next = new Node(1);
        head.next.next = new Node(2);
        head.next.next.next = new Node(1);
        printList(head);
        Node n = reverseList(head);
        System.out.println();
        printList(n);
        System.out.println();
        printList(head);
        // System.out.println(isPalindrome(head));
    }

    public static Node reverseList(Node head) {

        Node curr = head;
        Node prev = null;
        Node next = null;
        while (curr != null) {
            next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }

        return prev;

    }

    public static boolean isPalindrome(Node head) {
        Node reverse = reverseList(head);
        while (head != null) {
            System.out.println(reverse.data + " " + head.data);
            if (reverse.data != head.data)
                return false;
            else {
            }
            head = head.next;
            reverse = reverse.next;

        }
        return true;
    }

    static void printList(Node node) {
        while (node != null) {
            System.out.print(node.data + " ");
            node = node.next;
        }
    }
}