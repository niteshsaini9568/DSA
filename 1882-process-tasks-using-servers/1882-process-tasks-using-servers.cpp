class Solution {
public:
    vector<int> assignTasks(vector<int>& servers, vector<int>& tasks) {
        // Define type aliases for clarity; use long long for free_time to prevent overflow
        using ServerInfo = pair<int, int>;           // {weight, index}
        using BusyServer = tuple<long long, int, int>; // {free_time, weight, index}
      
        // Min-heap for idle servers (sorted by weight, then by index)
        priority_queue<ServerInfo, vector<ServerInfo>, greater<ServerInfo>> idleServers;
      
        // Min-heap for busy servers (sorted by free time, then weight, then index)
        priority_queue<BusyServer, vector<BusyServer>, greater<BusyServer>> busyServers;
      
        // Initialize all servers as idle
        for (int i = 0; i < servers.size(); ++i) {
            idleServers.push({servers[i], i});
        }
      
        int numTasks = tasks.size();
        vector<int> result(numTasks);
      
        // Process each task in order
        for (long long taskIndex = 0; taskIndex < numTasks; ++taskIndex) {
            long long taskDuration = tasks[taskIndex];
          
            // Free up servers that have completed their tasks by current time
            while (!busyServers.empty() && get<0>(busyServers.top()) <= taskIndex) {
                auto [freeTime, serverWeight, serverIndex] = busyServers.top();
                busyServers.pop();
                idleServers.push({serverWeight, serverIndex});
            }
          
            // Assign task to an available server
            if (!idleServers.empty()) {
                auto [serverWeight, serverIndex] = idleServers.top();
                idleServers.pop();
                result[taskIndex] = serverIndex;
              
                busyServers.push({taskIndex + taskDuration, serverWeight, serverIndex});
            } else {
                // All servers are busy, wait for the earliest one to become free
                auto [freeTime, serverWeight, serverIndex] = busyServers.top();
                busyServers.pop();
                result[taskIndex] = serverIndex;
              
                busyServers.push({freeTime + taskDuration, serverWeight, serverIndex});
            }
        }
      
        return result;
    }
};