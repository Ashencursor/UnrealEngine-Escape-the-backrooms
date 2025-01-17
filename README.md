# UnrealEngine Escape the backrooms



# TODO
* Invisible mouse : Fix it so that when the dll is unloaded from process it shows my mouse(hides mouse when menu is open)(could somehow change execution flow of unloading process to make this work or call ShowCursor())

# IMPLEMENTATIONS
* Adding *core* functionality to this project
* After adding modular way to hook things(using minhook, no longer kiero), get into the *real* game hacking.
    - After adding most visual functionalities/dependencies then do I add exploits, things unrelated to drawing stuff to the screen. 
      - This means adding a main loop/thread, esp, drawing boxes etc.

# Fixed
* Random error message box after closing game :  When unloading the dll from the game there are no issues however, when exiting the game from the games ui(not just closing the window on the tab) a message box appears. To what I know, the time of the unloading of the dll doesnt matter, but its how it is unloaded and how the game unloads when exiting it.
  -> Issue: DX11Hook class instance was static, so when the game shutdown after already unloading the dll from the game it re unloaded the dll, calling the shutdown() function from that class(the main issue).Just messed it up.
  -> If dll not unloaded, and game closes then it will not cause that error to show up after the  game is closed. ALthough the issue resides inside the shutdown() function its most likley when SetWindowLongPtrA() is called, because the game window might be closed and try to access its hwnd. Notice that hwnd is also never set to nullptr when releasing the dx11resoures.

# Dependencies used
- [X] Kiero
- [ ] MinHook
- [ ] Dumper-7
- [ ] ImGui
