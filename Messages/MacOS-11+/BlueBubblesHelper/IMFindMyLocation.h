// IMFindMyLocation - macOS 26+ (Tahoe)
// Wraps FMFLocation and FMLLocation into a unified IMCore location type.
// Returned by IMFMFSession.findMyLocationForFindMyHandle: on macOS 26+.

@class FMFLocation, FMLLocation;

@interface IMFindMyLocation : NSObject

@property (nonatomic, readonly) FMFLocation *fmfLocation;
@property (nonatomic, readonly) FMLLocation *fmlLocation;
@property (nonatomic, readonly) NSString *shortAddress;

+ (id)locationWithFMFLocation:(id)arg1;
+ (id)locationWithFMLLocation:(id)arg1;
+ (id)locationWithFMFLocation:(id)arg1 fmlLocation:(id)arg2;

- (id)initWithFMFLocation:(id)arg1 fmlLocation:(id)arg2;
- (FMFLocation *)fmfLocation;
- (FMLLocation *)fmlLocation;
- (NSString *)shortAddress;

@end
