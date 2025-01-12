# UnrealEngine Escape the backrooms



# TODO
* Invisible mouse : Fix it so that when the dll is unloaded from process it shows my mouse(hides mouse when menu is open)(could somehow change execution flow of unloading process to make this work or call ShowCursor())

# IMPLEMENTATIONS
* Adding *core* functionality to this project

# Shoutouts To


# Fixed
* Random error message box after closing game :  When unloading the dll from the game there are no issues however, when exiting the game from the games ui(not just closing the window on the tab) a message box appears. To what I know, the time of the unloading of the dll doesnt matter, but its how it is unloaded and how the game unloads when exiting it.
  -> Issue: DX11Hook class instance was static, so when the game shutdown after already unloading the dll from the game it re unloaded the dll
