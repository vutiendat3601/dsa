package linear;

public class Queue<T> {
    private final int MAX_SIZE;
    private T[] data;
    private int front;
    private int rear;
    private int size;

    /* #: Constructors */
    @SuppressWarnings("unchecked")
    public Queue() {
        MAX_SIZE = 10000;
        rear = -1;
        data = (T[]) new Object[MAX_SIZE];
    }
    /* # Constructors */

    /* #: Bussiness code */
    public int size() {
        return size;
    }

    public boolean empty() {
        return size == 0;
    }

    public T peek() {
        return data[front % MAX_SIZE];
    }

    public boolean enqueue(T value) {
        if (size < MAX_SIZE) {
            rear = ++rear % MAX_SIZE;
            data[rear] = value;
            size++;
            return true;
        }
        return false;
    }

    public boolean dequeue() {
        if (size > 0) {
            data[front] = null;
            front = ++front % MAX_SIZE;
            size--;
            return true;
        }
        return false;
    }

    /* # Bussiness code */
    public static void main(String[] args) {
        Queue<Integer> queue = new Queue<>();
        System.out.println(queue.size());
        System.out.println(queue.dequeue());
        queue.enqueue(1);
        queue.enqueue(2);
        queue.enqueue(3);
        queue.enqueue(4);
        queue.enqueue(5);
        queue.enqueue(6);
        queue.enqueue(7);
        queue.enqueue(8);
        queue.enqueue(9);
        queue.enqueue(10);
        System.out.println(queue.size());
        System.out.println(queue.dequeue());
        queue.enqueue(11);
        System.out.println(queue.size());
    }
}
