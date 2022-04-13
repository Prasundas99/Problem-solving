import java.util.ArrayList;

public class GraphSearch {
    
    int vertices;
    ArrayList<Integer> adj[];

    public GraphSearch(int noOfVertices) {
        V = noOfVertices;
        adj = new ArrayList[noOfVertices];
        for (int i = 0; i < noOfVertices; i++) {
          adj[i] = new ArrayList<>();  
        }
    }


    void edge(int x, int y){
        adj[x].add(y);
    }

    void BFS(int sourceVerticex){
        
    }

    public static void main(String[] args) {
        
    }
}
