// IMFindMyHandle - macOS 26+ (Tahoe)
// Wraps FMFHandle and FMLHandle into a unified IMCore handle type.
// Used by IMFMFSession.didReceiveLocationForHandle: on macOS 26+.

@class FMFHandle, FMLHandle;

@interface IMFindMyHandle : NSObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) FMFHandle *fmfHandle;
@property (nonatomic, readonly) FMLHandle *fmlHandle;

+ (id)handleWithIdentifier:(id)arg1;
+ (id)handleWithFMFHandle:(id)arg1;
+ (id)handleWithFMLHandle:(id)arg1;

- (id)initWithIdentifier:(id)arg1;
- (NSString *)identifier;
- (FMFHandle *)fmfHandle;
- (FMLHandle *)fmlHandle;

@end
