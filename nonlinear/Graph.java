package nonlinear;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import java.util.Scanner;

import linear.Queue;

public class Graph {
    public static final int MAX_N = 1000;

    private int[][] g;

    private int numOfVertices;

    public void loadData(Scanner scan) {
        final int NUM_OF_VERTICES = Integer.parseInt(scan.nextLine());
        if (NUM_OF_VERTICES < MAX_N) {
            numOfVertices = NUM_OF_VERTICES;
            g = new int[numOfVertices + 1][];
            for (int i = 1; i <= numOfVertices; i++) {
                String line = scan.nextLine();
                String[] vertices = line.split(" ");
                g[i] = new int[vertices.length];
                for (int j = 0; j < vertices.length; j++) {
                    g[i][j] = Integer.parseInt(vertices[j]);
                }
            }
        }
    }

    public void printGraph() {
        if (g != null) {
            for (int i = 1; i <= numOfVertices; i++) {
                System.out.printf("%3d", i);
                for (int j = 0; j < g[i].length; j++) {
                    System.out.printf("%3d", g[i][j]);
                }
                System.out.printf("\n");
            }
        }
    }

    public int numOfConnectedComponent() {
        int cnt = 0;
        if (g != null) {
            final boolean dfsVisited[] = new boolean[numOfVertices + 1];
            for (int i = 1; i <= numOfVertices; i++) {
                if (!dfsVisited[i]) {
                    cnt++;
                    dfs(i, new LinkedList<>(), dfsVisited);
                }
            }
        }
        return cnt;
    }

    public int[] bfs(int i) {
        List<Integer> result = new LinkedList<>();
        if (g != null && i <= numOfVertices) {
            Queue<Integer> q = new Queue<>();
            final boolean visited[] = new boolean[numOfVertices + 1];
            q.enqueue(i);
            visited[i] = true;
            while (!q.empty()) {
                int tmp = q.peek();
                result.add(tmp);
                q.dequeue();
                for (int j : g[tmp]) {
                    if (!visited[j]) {
                        q.enqueue(j);
                        visited[j] = true;
                    }
                }
            }
        }
        return result.stream().mapToInt(Integer::intValue).toArray();
    }

    public int[] dfs(int i) {
        List<Integer> result = List.of();
        if (g != null && i <= numOfVertices) {
            final boolean dfsVisited[] = new boolean[numOfVertices + 1];
            result = dfs(i, new LinkedList<>(), dfsVisited);
        }
        return result.stream().mapToInt(Integer::intValue).toArray();
    }

    private List<Integer> dfs(int i, List<Integer> result, boolean[] visited) {
        result.add(i);
        visited[i] = true;
        for (int j : g[i]) {
            if (!visited[j]) {
                dfs(j, result, visited);
            }
        }
        return result;
    }

    public static void main(String[] args) throws FileNotFoundException {
        System.setIn(new FileInputStream("/home/vutiendat3601/workspace/learning/dsa/nonlinear/vertices.txt"));
        Scanner scan = new Scanner(System.in);
        Graph s = new Graph();
        s.loadData(scan);

        System.out.println("Depth first search: " + Arrays.toString(s.dfs(1)));
        System.out.println("Breath first search: " + Arrays.toString(s.bfs(1)));
        System.out.println("Number of connected components: " + s.numOfConnectedComponent());
        scan.close();
    }
}
