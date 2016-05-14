/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:41 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNKeysConfiguration, NSArray, NSString;

@interface MNAppDelegateConfiguration : NSObject {

	MNKeysConfiguration* _keysConfiguration;
	NSArray* _topLevelProviderModules;
	NSString* _flytrapCategoryID;
	/*^block*/id _sessionControllerInitializerBlock;

}

@property (nonatomic,copy) MNKeysConfiguration * keysConfiguration;              //@synthesize keysConfiguration=_keysConfiguration - In the implementation block
@property (nonatomic,copy) NSArray * topLevelProviderModules;                    //@synthesize topLevelProviderModules=_topLevelProviderModules - In the implementation block
@property (nonatomic,copy) NSString * flytrapCategoryID;                         //@synthesize flytrapCategoryID=_flytrapCategoryID - In the implementation block
@property (nonatomic,copy) id sessionControllerInitializerBlock;                 //@synthesize sessionControllerInitializerBlock=_sessionControllerInitializerBlock - In the implementation block
+(id)sharedInstance;
-(void)setKeysConfiguration:(MNKeysConfiguration *)arg1 ;
-(void)setTopLevelProviderModules:(NSArray *)arg1 ;
-(void)setFlytrapCategoryID:(NSString *)arg1 ;
-(void)setSessionControllerInitializerBlock:(id)arg1 ;
-(MNKeysConfiguration *)keysConfiguration;
-(NSArray *)topLevelProviderModules;
-(id)sessionControllerInitializerBlock;
-(NSString *)flytrapCategoryID;
@end

