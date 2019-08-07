
    // Complete the arrayManipulation function below.
    static long arrayManipulation(int n, int[][] queries) {
    long[] computation = new long[n];

    for (int i = 0; i < queries.length; i++) {
      int a = queries[i][0] - 1;
      int b = queries[i][1] - 1;
      int k = queries[i][2];

      computation[a] += k;
      if (b + 1 < n ) {
        computation[b + 1] -= k;
      }
    }

    long max = 0; long sum = 0;
    for (int i = 0; i < n; i++) {
      sum += computation[i];
      max = Math.max(max, sum);
    }

    return max;
  }