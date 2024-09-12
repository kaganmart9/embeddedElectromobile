using System; // System namespace is used for basic system functions
using System.Collections.Generic; // Provides generic collection classes
using System.Linq; // Provides LINQ functionalities
using System.Text; // Provides classes for encoding and string manipulation
using System.Threading.Tasks; // Provides types for asynchronous programming
using FireSharp.Config; // Provides configuration classes for FireSharp
using FireSharp.Interfaces; // Provides interface definitions for FireSharp
using FireSharp.Response; // Provides response classes for FireSharp

namespace WpfApp2
{
    // Defines a class named 'FirebaseConnection'
    class FirebaseConnection
    {
        // Configuration for Firebase connection
        public IFirebaseConfig config = new FirebaseConfig
        {
            AuthSecret = "CONFIDENTIAL_INFORMATION", // Authentication secret for Firebase
            BasePath = "https://CONFIDENTIAL.firebaseio.com/" // Base path for Firebase database
        };

        // Client for interacting with Firebase
        public IFirebaseClient client;
        
        // Response from Firebase operations
        public FirebaseResponse response;
    }
}
