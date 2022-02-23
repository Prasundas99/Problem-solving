package DSA.Stack;

public class DynamicStack extends CustomStack {
    public DynamicStack(){
        super(); //it will call Custonstack()
    }
    public DynamicStack(int size){
        super(size); //it will call Custonstack(size)
    }


    @Override
    public boolean push(int item){
        //this takes care of it beign full
        if(this.isFull()){
            //double the array size
            int[] temp = new int[data.length * 2];

            //Copy all previous items in new data
            //System.arraycopy(data, 0, temp, 0, data.length);
            for(int i=0; i<data.length;i++){
                temp[i] = data[i];
            }
            data = temp;
        }
        //at this point we know that array is not full so
        //insert item
        return super.push(item);
    }
}
