# CVE-2020-0668 and NetMan DLL Hijacking

This implementation is cobbled together from 

* [https://github.com/itm4n/SysTracingPoc](https://github.com/itm4n/SysTracingPoc)
* [https://itm4n.github.io/windows-server-netman-dll-hijacking/](https://itm4n.github.io/windows-server-netman-dll-hijacking/)

I replace the UsoDllLoader with the NetMan DLL Hijacking vuln since the UsoLoader was too unreliable.
