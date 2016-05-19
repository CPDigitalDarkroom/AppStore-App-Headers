/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:36 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTAbbaFeatureFlagsObserver.h>
#import <Spotify/SPTIAPFeatureFlags.h>

@protocol SPTIAPFeatureFlags <NSObject>
@property (getter=isNewStackEnabled,nonatomic,readonly) char newStackEnabled; 
@property (getter=isBetaDetectorEnabled,nonatomic,readonly) char betaDetectorEnabled; 
@required
-(char)isNewStackEnabled;
-(char)isBetaDetectorEnabled;

@end


@protocol SPTAbbaFeatureFlags;
@class NSString;

@interface SPTIAPFeatureFlags : NSObject <SPTAbbaFeatureFlagsObserver, SPTIAPFeatureFlags> {

	char newStackEnabled;
	char betaDetectorEnabled;
	id<SPTAbbaFeatureFlags> _abbaFlags;

}

@property (assign,getter=isNewStackEnabled,nonatomic) char newStackEnabled; 
@property (assign,getter=isBetaDetectorEnabled,nonatomic) char betaDetectorEnabled; 
@property (nonatomic,readonly) id<SPTAbbaFeatureFlags> abbaFlags;                                //@synthesize abbaFlags=_abbaFlags - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)featureFlagsDidChange:(id)arg1 ;
-(id<SPTAbbaFeatureFlags>)abbaFlags;
-(char)isNewStackEnabled;
-(void)setNewStackEnabled:(char)arg1 ;
-(void)setBetaDetectorEnabled:(char)arg1 ;
-(char)isBetaDetectorEnabled;
-(id)initWithFeatureFlags:(id)arg1 ;
-(void)dealloc;
@end

