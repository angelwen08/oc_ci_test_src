@protocol BunnyTestP2 <NSObject>
/**
 * @brief The App Service Identifier name.
 */
@property(nonatomic, readonly, copy, nonnull) NSString* p2Property;

/**
* @brief Create an instance.
* @remark  remark for atom class
* @discussion discussionsssssss
* @param request parameter request for this method
* @param appServiceName parameter appServiceName for this method
* @param appIdentifier parameter appIdentifier for this method
* @param delegate parameter delegate for this method
* @return return instancetype
*/
- (nullable instancetype)p2Method:(nonnull MCDRemoteSystemConnectionRequest*)request
                                    appServiceName:(nonnull NSString*)appServiceName
                                     appIdentifier:(nonnull NSString*)appIdentifier
                                          delegate:(nonnull id<MCDAppServiceClientConnectionManagerDelegate>)delegate;
@end