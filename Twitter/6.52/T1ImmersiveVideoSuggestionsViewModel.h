/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:34 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/T1ImmersiveVideoViewModel.h>

@protocol T1ImmersiveVideoViewModelDelegate;
@class TFNTwitterStatus, NSError, NSArray, TFNTwitterAccount, TFSTwitterAPICommandService, TFNTwitterStream, NSString;

@interface T1ImmersiveVideoSuggestionsViewModel : NSObject <T1ImmersiveVideoViewModel> {

	char _loading;
	id<T1ImmersiveVideoViewModelDelegate> delegate;
	TFNTwitterAccount* _account;
	TFSTwitterAPICommandService* _commandService;
	TFNTwitterStream* _stream;
	TFNTwitterStatus* _seedStatus;
	NSError* _error;
	NSString* _loadedVideosSectionTitle;
	NSArray* _loadedVideoStatuses;

}

@property (nonatomic,retain) TFNTwitterAccount * account;                                        //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) TFSTwitterAPICommandService * commandService;                       //@synthesize commandService=_commandService - In the implementation block
@property (nonatomic,retain) TFNTwitterStream * stream;                                          //@synthesize stream=_stream - In the implementation block
@property (nonatomic,retain) TFNTwitterStatus * seedStatus;                                      //@synthesize seedStatus=_seedStatus - In the implementation block
@property (nonatomic,retain) NSError * error;                                                    //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSString * loadedVideosSectionTitle;                                //@synthesize loadedVideosSectionTitle=_loadedVideosSectionTitle - In the implementation block
@property (nonatomic,retain) NSArray * loadedVideoStatuses;                                      //@synthesize loadedVideoStatuses=_loadedVideoStatuses - In the implementation block
@property (assign,getter=isLoading,nonatomic) char loading;                                      //@synthesize loading=_loading - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<T1ImmersiveVideoViewModelDelegate> delegate; 
@property (nonatomic,readonly) char isEmpty; 
+(char)isStatusEligible:(id)arg1 ;
-(char)loadVideoStatuses;
-(TFNTwitterStatus *)seedStatus;
-(NSArray *)loadedVideoStatuses;
-(id)initWithAccount:(id)arg1 seedStatus:(id)arg2 ;
-(id)initWithAccount:(id)arg1 seedStatus:(id)arg2 commandService:(id)arg3 ;
-(TFSTwitterAPICommandService *)commandService;
-(void)apiCommandReturnedSuggestedVideos:(id)arg1 ;
-(void)setLoadedVideosSectionTitle:(NSString *)arg1 ;
-(void)setLoadedVideoStatuses:(NSArray *)arg1 ;
-(void)setCommandService:(TFSTwitterAPICommandService *)arg1 ;
-(void)setSeedStatus:(TFNTwitterStatus *)arg1 ;
-(NSString *)loadedVideosSectionTitle;
-(NSError *)error;
-(void)setDelegate:(id<T1ImmersiveVideoViewModelDelegate>)arg1 ;
-(id<T1ImmersiveVideoViewModelDelegate>)delegate;
-(char)isEmpty;
-(char)isLoading;
-(void)setStream:(TFNTwitterStream *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(TFNTwitterStream *)stream;
-(void)setLoading:(char)arg1 ;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(TFNTwitterAccount *)account;
@end

