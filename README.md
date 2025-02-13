# UnrealEngine Escape the backrooms



# TODO

# IMPLEMENTATIONS

# Fixed
* Invisible Mouse after uninject
* Random error message box after closing game :  When unloading the dll from the game there are no issues however, when exiting the game from the games ui(not just closing the window on the tab) a message box appears. To what I know, the time of the unloading of the dll doesnt matter, but its how it is unloaded and how the game unloads when exiting it.
  -> Issue: DX11Hook class instance was static, so when the game shutdown after already unloading the dll from the game it re unloaded the dll, calling the shutdown() function from that class(the main issue).Just messed it up.
  -> If dll not unloaded, and game closes then it will not cause that error to show up after the  game is closed. ALthough the issue resides inside the shutdown() function its most likley when SetWindowLongPtrA() is called, because the game window might be closed and try to access its hwnd. Notice that hwnd is also never set to nullptr when releasing the dx11resoures.

# Dependencies used
Crossed out Dependencies were replaced by my own code.
- ~~[X] Kiero~~
- ~~[X] MinHook~~
- [X] Dumper-7
- [X] ImGui

# Showcase
https://github.com/user-attachments/assets/71c3a08b-3a63-482a-89b9-0ade850d0873

