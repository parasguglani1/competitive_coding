using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1.Helpers
{
    internal class UniqueIdGenerator
    {
        public UniqueIdGenerator(string prefix)
        {
            this._prefix = prefix;
        }
        private string _prefix = "";
        private ulong _n = 1;
        public string GetUid()
        {
            if (_n == ulong.MaxValue)
            {
                _n = 1;
            }
            return _prefix + (_n++).ToString();
        }
    }
}
