void FUN_140011cd0(void)

{
  do {
    mciSendStringA("set cdaudio door open",(LPSTR)0x0,0,(HWND)0x0);
    Sleep(2000);
    mciSendStringA("set cdaudio door closed",(LPSTR)0x0,0,(HWND)0x0);
    Sleep(2000);
  } while( true );
}
