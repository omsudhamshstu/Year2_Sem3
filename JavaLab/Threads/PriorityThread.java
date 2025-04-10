package Threads;
class PriorityThread extends Thread {
    public PriorityThread(String name, int priority) {
        super(name);
        setPriority(priority);
    }

    public void run() {
        System.out.println(getName() + " with priority " + getPriority() + " is running");
    }

    public static void main(String[] args) {
        PriorityThread t1 = new PriorityThread("Thread-1", Thread.MIN_PRIORITY); // Priority 1
        PriorityThread t2 = new PriorityThread("Thread-2", Thread.NORM_PRIORITY); // Priority 5
        PriorityThread t3 = new PriorityThread("Thread-3", Thread.MAX_PRIORITY); // Priority 10
        
        t1.start();
        t2.start();
        t3.start();
    }
}