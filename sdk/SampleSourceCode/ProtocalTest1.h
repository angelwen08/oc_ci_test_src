/**
 * @brief brief for p111
 * @remark  remark for p111
 * @remark  remark for p111
 * @discussion p111ssssss
 */
@protocol ProtocalTest1 <NSObject>
/**
 * @brief The App Service Identifier name.
 */
@property(nonatomic, readonly, copy, nonnull) NSString* p1Property;

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
- (nullable instancetype)p1Method:(nonnull MCDRemoteSystemConnectionRequest*)request
                                    appServiceName:(nonnull NSString*)appServiceName
                                     appIdentifier:(nonnull NSString*)appIdentifier
                                          delegate:(nonnull id<MCDAppServiceClientConnectionManagerDelegate>)delegate;

@end