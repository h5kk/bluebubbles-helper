# Changelog

## [Unreleased]

### Added
- Find My friends location tracking via Private API (IMFMFSession + FindMyLocate framework)
  - `refreshFriends` action handler with cached + live location resolution
  - Real-time location updates via FindMyLocateSession callback
  - Support for macOS 14-15 (FMLHandle) and macOS 26+ (IMFindMyHandle/IMFindMyLocation)
  - IMFindMyHandle.h and IMFindMyLocation.h header declarations
- Contact Private API with 8 new action handlers:
  - `get-handles-contact-info` - List all IMHandles with contact metadata
  - `get-contact-for-handle` - Full CNContact for a given address
  - `get-contact-photo` - Contact photo as base64 data
  - `batch-check-imessage` - Batch iMessage registration check
  - `get-handle-siblings` - All addresses for the same person
  - `get-suggested-names` - Siri-suggested display names
  - `get-contact-availability` - Focus/DND status for a handle
  - `detect-business-contact` - Detect Apple Business Chat accounts

### Fixed
- Find My friends handle resolution on macOS 14+: FMLHandle objects don't respond to `@selector(identifier)`, causing nil handle IDs and dropped location updates
  - Built lookup map from IMFMFSession to resolve FMLHandle to identifier strings
  - Added 4-strategy `extractHandleId` helper (`.identifier`, `.ID`, map lookup, description parsing)
