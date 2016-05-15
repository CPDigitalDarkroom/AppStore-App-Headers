/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:50 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFNTwitterAVPlayerControllerObserver.h>

@class NSHashTable, NSString;

@interface TFNTwitterAVPlayerControllerObserverGroup : NSObject <TFNTwitterAVPlayerControllerObserver> {

	NSHashTable* _weakObserversHashTable;

}

@property (nonatomic,retain) NSHashTable * weakObserversHashTable;              //@synthesize weakObserversHashTable=_weakObserversHashTable - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removePlayerObserver:(id)arg1 ;
-(void)addPlayerObserver:(id)arg1 ;
-(void)avPlayerController:(id)arg1 session:(id)arg2 willChangeFromVideo:(id)arg3 toVideo:(id)arg4 ;
-(void)avPlayerController:(id)arg1 session:(id)arg2 didChangeFromVideo:(id)arg3 toVideo:(id)arg4 ;
-(void)avPlayerController:(id)arg1 session:(id)arg2 video:(id)arg3 didFailWithError:(id)arg4 ;
-(void)avPlayerController:(id)arg1 session:(id)arg2 video:(id)arg3 didHitTentpole:(int)arg4 ;
-(void)avPlayerController:(id)arg1 session:(id)arg2 video:(id)arg3 rateDidChangeFrom:(id)arg4 to:(id)arg5 ;
-(void)avPlayerController:(id)arg1 session:(id)arg2 video:(id)arg3 timeDidChangeTo:(double)arg4 withContinuousInterval:(double)arg5 ;
-(void)avPlayerControllerDidInitiateBuffering:(id)arg1 session:(id)arg2 video:(id)arg3 ;
-(void)avPlayerControllerDidStall:(id)arg1 session:(id)arg2 video:(id)arg3 ;
-(void)avPlayerControllerTimeDidJump:(id)arg1 session:(id)arg2 video:(id)arg3 ;
-(void)avPlayerControllerWillLoop:(id)arg1 session:(id)arg2 video:(id)arg3 ;
-(void)avPlayerControllerDidPlayToEndTime:(id)arg1 session:(id)arg2 video:(id)arg3 ;
-(void)avPlayerControllerWillReplay:(id)arg1 session:(id)arg2 video:(id)arg3 ;
-(void)avPlayerController:(id)arg1 session:(id)arg2 video:(id)arg3 playingChangedTo:(char)arg4 ;
-(void)setWeakObserversHashTable:(NSHashTable *)arg1 ;
-(NSHashTable *)weakObserversHashTable;
-(id)init;
@end

