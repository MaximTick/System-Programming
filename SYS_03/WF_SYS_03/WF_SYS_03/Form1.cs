using AxActiveXCPP2Lib;
using ActiveXCPP2Lib;   
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WF_SYS_03
{
    public partial class Form1 : Form
    {
        static int k = 10;
        public Form1()
        {
            InitializeComponent();
            k = axActiveXCPP21.TestMyMethod(4, 4, "Hi");
            axActiveXCPP21.EventHandlerTest +=
              new AxActiveXCPP2Lib._DActiveXCPP2Events_EventHandlerTestEventHandler(
              axActiveXCPP21_EventHandlerTest);
        }


        private void axActiveXCPP21_EventHandlerTest(object sender, _DActiveXCPP2Events_EventHandlerTestEvent e)
        {
            int age = e.age;
            string name = e.name;
            string surname = e.surname;

        }


        private void button1_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Active returned:" + k);
        }

        private void button2_Click(object sender, EventArgs e)
        {
            try
            {

                float k = 0.0f;
                k = axActiveXCPP21.TestMyMethod2(Convert.ToUInt32(textBox1.Text));
                label1.Text += $"результат {k}\n";
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }

        }
    }
}
