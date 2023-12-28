#include <iostream>
#include "include/ATM.h"
#include "include/Help.h"
using namespace std;

int main() {
    try{
        // Help HELP("HELP");
        // HELP.displayHelp();
        ATM atm("ATM");
        atm.run();
        system("pause");
    }catch (const exception& e) {
        cerr << e.what() << endl;
        system("pause");
    }
    return 0;
}
// HELP.setShortDescription("Displays help about PowerShell cmdlets and concepts.");
// HELP.setLongDescription("PowerShell Help describes PowerShell cmdlets, functions, scripts, and\n"
//                         "    modules, and explains concepts, including the elements of the PowerShell\n"
//                         "    language.\n"
//                         "\n"
//                         "    PowerShell does not include help files, but you can read the help topics\n"
//                         "    online, or use the Update-Help cmdlet to download help files to your\n"
//                         "    computer and then use the Get-Help cmdlet to display the help topics at\n"
//                         "    the command line.\n"
//                         "\n"
//                         "    You can also use the Update-Help cmdlet to download updated help files\n"
//                         "    as they are released so that your local help content is never obsolete.\n"
//                         "\n"
//                         "    Without help files, Get-Help displays auto-generated help for cmdlets,\n"
//                         "    functions, and scripts.");
// HELP.setOnlineHelp({"You can find help for PowerShell online at\n"
//                 "    https://go.microsoft.com/fwlink/?LinkID=108518.\n"
//                 "\n"
//                 "    To open online help for any cmdlet or function, type:\n"
//                 "\n"
//                 "        Get-Help <cmdlet-name> -Online"});
//
// HELP.setSyntax({"Get-Help <cmdlet-name>"});
