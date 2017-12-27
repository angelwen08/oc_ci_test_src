#import "BunnyTestAtomSub.h"
#import "BunnyTestP1Sub.h"
#import "BunnyTestP2.h"
/**
 * @brief brief for an atom class
 * @remark  remark for atom class
 * @remark  remark for atom class 2222
 * @discussion discussionsssssss
 */
@interface BunnyTestAtomSub : BunnyTestAtom <BunnyTestP1Sub, BunnyTestP2>
	/**
 	* @brief The MCDRemoteSystemConnectionRequest.
 	* @remark  remark for atom class
    * @discussion discussionsssssss
 	*/
	@property(atomic, readwrite, strong, nonnull) BunnyTestClassA* connectionRequest;

	/**
 	* @brief The App Service name.
 	* @remark  remark for atom class
    * @discussion discussionsssssss
 	*/
	@property(nonatomic, readonly, copy, nonnull) NSString* appServiceName;

	/**
 	* @brief The App Service Identifier name.
 	* @remark  remark for atom class
    * @discussion discussionsssssss
 	*/
	@property(nonatomic, readonly, copy, nonnull) NSString* appIdentifier;

	/**
 	* @brief NSDictionary<NSString, NSDictionary<NSString *, NSDictionary<NSString *, NSString>>> nestedGenericCollection;
 	*/
	@property NSDictionary<NSString, NSDictionary<NSString *, NSDictionary<NSString *, NSString>>> nestedGenericCollection;

	/**
	* @brief int (^simpleBlock)(int, int);
	*/
	@property int (^simpleBlock)(int, int);

	/**
	* @brief NSArray<NSString*>* (^genericInBlock)(NSInteger, NSArray<NSString*>*);
	*/
	@property NSArray<NSString*>* (^genericInBlock)(NSInteger, NSArray<NSString*>*);

	/**
 	* @brief NSArray<NSString (^)(NSString*, NSString)>* blockInGenericCollection;
 	*/
	@property NSArray<NSString (^)(NSString*, NSString)>* blockInGenericCollection;

	/**
	* @brief int (^blockInBlock)(int (^)(int, int), int);
	*/
	@property int (^blockInBlock)(int (^)(int, int), int);

	/**
	* @brief int (^blockInBlockInBlock)(int (^)(int (^)(int, int), int), int);
	*/
	@property int (^blockInBlockInBlock)(int (^)(int (^)(int, int), int), int);

	/**
	* @brief NSDictionary<NSString*, NSDictionary<NSString*, NSString>*>* (^blockInBlockWithGeneric)(int (^)(NSArray<NSString*>*, int), int);
	*/
	@property NSDictionary<NSString*, NSDictionary<NSString*, NSString>*>* (^blockInBlockWithGeneric)(int (^)(NSArray<NSString*>*, int), int);

	/**
	* @brief NSDictionary<NSString, NSDictionary<NSString*, NSString>*>* (^blockInBlockInBlockWithGeneric) (int (^) (NSDictionary<NSString *, NSDictionary<NSString *, NSString>>*, int), int);
	*/
	@property NSDictionary<NSString, NSDictionary<NSString*, NSString>*>* (^blockInBlockInBlockWithGeneric) (int (^) (NSDictionary<NSString *, NSDictionary<NSString *, NSString>>*, int), int);


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
	+ (nullable instancetype) atomsubMethod1:(nonnull BunnyTestClassA*)request
                                    appServiceName:(nonnull NSString*)appServiceName
                                     appIdentifier:(nonnull NSString*)appIdentifier
                                          delegate:(nonnull id<BunnyTestP1Sub>)delegate;

    - (NSString*) addRequestReceivedListener:(nonnull void (^)( MCDAppServiceConnection* _Nonnull, MCDAppServiceRequestReceivedEventArgs* _Nonnull))listener;
@end