/**
 * @brief brief description for an atom class
 * @remark  remark for atom class
 * @discussion discussion for atom class
 */
@interface ClassATest : NSObject
	/**
 	* @brief The App Service Identifier name.
 	* @remark  remark for atom class
    * @discussion discussionsssssss
 	*/
	@property(nonatomic, readonly, copy, nonnull) NSString* property1;

	/**
 	* @brief Create an instance.
 	* @remark  remark for atom class
    * @discussion discussionsssssss
 	* @param request parameter request for this method
 	* @param appServiceName parameter appServiceName for this 
 	* @return return instancetype
 	*/
	- (nullable instancetype) method1:(nonnull NSString*)request
                                    appServiceName:(nonnull NSString*)appServiceName;
@end