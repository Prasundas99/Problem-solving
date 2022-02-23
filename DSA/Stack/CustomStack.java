package DSA.Stack;
import java.lang.Exception;

public class CustomStack {
    protected int[] data;
    private static final int DEFAULT_SIZE = 10;

    int ptr = -1;

    public CustomStack() {
        this(DEFAULT_SIZE);
    }

    public CustomStack(int size){
        this.data = new int[size];
    }

    public boolean push(int item){
        if(isFull()){
            return false;
        }
        ptr++;
        data[ptr] = item;
        return true;
    }


    public int pop() throws Exception{
        if(isEmpty()){
            throw new Exception("Cannot pop from an empty aray");
        }
        int removedItem = data[ptr];
        ptr--;
        return removedItem;
    }

    public int peek() throws Exception{
        if(isEmpty()){
            throw new Exception("Cannot peek from empty stack");
        }
        return data[ptr];
    }

    public boolean isFull(){
        return ptr == data.length -1;
    }
    private boolean isEmpty(){
        return ptr ==-1;
    }
}


