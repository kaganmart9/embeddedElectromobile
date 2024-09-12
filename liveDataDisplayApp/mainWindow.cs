using System; // System namespace is used for basic system functions
using System.Collections.Generic; // Provides generic collection classes
using System.Linq; // Provides LINQ functionalities
using System.Text; // Provides classes for encoding and string manipulation
using System.Threading.Tasks; // Provides types for asynchronous programming
using System.Windows; // Provides classes for creating Windows-based applications
using System.Windows.Controls; // Provides classes for creating user interface controls
using System.Windows.Data; // Provides classes for data binding
using System.Windows.Documents; // Provides classes for document handling
using System.Windows.Input; // Provides classes for input handling
using System.Windows.Media; // Provides classes for media handling
using System.Windows.Media.Imaging; // Provides classes for handling images
using System.Windows.Navigation; // Provides classes for navigation
using System.Windows.Shapes; // Provides classes for drawing shapes
using LiveCharts; // Provides charting library
using LiveCharts.Wpf; // Provides WPF-specific charting functionalities
using System.Net; // Provides classes for network operations
using System.IO; // Provides classes for input and output operations
using System.Windows.Threading; // Provides classes for managing the UI thread
using LiveCharts.Defaults; // Provides default charting configurations
using LiveCharts.Configurations; // Provides charting configurations

namespace WpfApp2
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent(); // Initializes the components of the window

            DispatcherTimer timer = new DispatcherTimer(); // Creates a new timer
            timer.Interval = TimeSpan.FromSeconds(1); // Sets the timer interval to 1 second
            timer.Tick += timer_Tick; // Adds an event handler for the Tick event
            timer.Start(); // Starts the timer

            void timer_Tick(object sender, EventArgs e)
            {
                try
                {
                    FirebaseConnection con = new FirebaseConnection(); // Creates a new Firebase connection

                    void cagir()
                    {
                        con.client = new FireSharp.FirebaseClient(con.config); // Initializes the Firebase client
                        con.response = con.client.Get("/"); // Gets data from Firebase
                        kent xd = con.response.ResultAs<kent>(); // Converts the response to a 'kent' object
                        hiz.Text = xd.Hiz; // Updates the 'hiz' TextBlock with the speed value
                        sicaklik.Text = xd.Sicaklik; // Updates the 'sicaklik' TextBlock with the temperature value
                        watt.Text = xd.Watt; // Updates the 'watt' TextBlock with the watt value
                        akim.Text = xd.Akim; // Updates the 'akim' TextBlock with the current value
                    }
                    cagir(); // Calls the 'cagir' method
                }
                catch (Exception)
                {
                    // Handle exceptions here
                }
            }
        }
    }
}
