int longestCycle(int* edges, int edgesSize) {
    int result = -1;
    int cur_time = 1;
    int* vis_time = calloc(edgesSize, sizeof(int));

    for (int i = 0; i < edgesSize; i++) {
        int x = i;
        int start_time = cur_time;

        while (x != -1 && vis_time[x] == 0) {
            vis_time[x] = cur_time;
            cur_time++;
            x = edges[x];
        }
        if (x != -1 && vis_time[x] >= start_time)
            result = fmax(result, cur_time - vis_time[x]);
    }

    free(vis_time);
    return result;
}