package Threads;
class MyThread extends Thread {
    public void run() {
        for (int i = 1; i <= 5; i++) {
            System.out.println("MyThread: " + i);
        }
    }
}

class MyRunnable implements Runnable {
    public void run() {
        for (int i = 1; i <= 5; i++) {
            System.out.println("MyRunnable: " + i);
        }
    }
}

public class ThreadImp {
    public static void main(String[] args) {
        // Using Thread class
        MyThread thread1 = new MyThread();

        // Using Runnable interface
        Thread thread2 = new Thread(new MyRunnable());

        thread1.start();
        thread2.start();
    }
}
