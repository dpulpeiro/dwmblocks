# dwmblocks - Modular Status Bar

Modular status bar for dwm. Each block runs an external script and can be updated independently via signals.

## Status Blocks

| Script | Update Interval | Signal | Description |
|---|---|---|---|
| `sb-shutdown` | Manual | `RTMIN+1` | Shutdown/power button |
| `recordingicon` | Manual | `RTMIN+19` | Screen recording indicator |
| `sb-record` | Manual | `RTMIN+2` | Recording status |
| `sb-bluetooth` | 30s | `RTMIN+9` | Bluetooth status |
| `sb-memory` | 5s | `RTMIN+14` | Memory usage |
| `sb-cpu` | 2s | `RTMIN+18` | CPU usage |
| `sb-volume` | Manual | `RTMIN+10` | Volume level |
| `sb-battery` | 30s | `RTMIN+3` | Battery status |
| `sb-clock` | 60s | `RTMIN+1` | Date and time |
| `sb-internet` | 10s | `RTMIN+4` | Network/internet status |

## Manual Signal Updates

Force-update a specific block by sending its signal:

```bash
# Update volume block
pkill -RTMIN+10 dwmblocks

# Update battery block
pkill -RTMIN+3 dwmblocks

# Update internet block
pkill -RTMIN+4 dwmblocks

# Update bluetooth block
pkill -RTMIN+9 dwmblocks

# Update memory block
pkill -RTMIN+14 dwmblocks

# Update cpu block
pkill -RTMIN+18 dwmblocks
```

Alternatively, use `kill -$((34+SIGNAL)) $(pidof dwmblocks)` for faster updates.

## Click Support

Blocks support clickable actions via dwm's `sigdwmblocks` integration. The mouse button number is passed to scripts as `$BLOCK_BUTTON`:

| Button | Value | Action |
|---|---|---|
| Left click | 1 | Primary action |
| Middle click | 2 | Secondary action |
| Right click | 3 | Tertiary action |
| Scroll up | 4 | Increment |
| Scroll down | 5 | Decrement |
| Shift+Left click | 6 | Alternative action |

## Configuration

- Delimiter between blocks: two spaces
- Scripts must be available in `$PATH`
- Blocks with interval `0` only update on signal

## Installation

```
sudo make install
```

Scripts (`sb-*`) must be installed separately and available in `$PATH`.
