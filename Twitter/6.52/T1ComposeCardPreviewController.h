/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:36 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TFNUI/TFNViewController.h>

@protocol T1ComposeCardPreviewControllerDelegate, TFSTwitterAPICommandCancelling;
@class TFNTwitterAccount, TFNTwitterCardData, NSString, TFNPaddedButton, NSArray, TFNTimer, T1NativeCardConsistencyChecker, T1ComposeCardPreviewView;

@interface T1ComposeCardPreviewController : TFNViewController {

	char _shouldFetchCard;
	id<T1ComposeCardPreviewControllerDelegate> _delegate;
	TFNTwitterAccount* _account;
	TFNTwitterCardData* _cardData;
	NSString* _clientAttachedCardURL;
	TFNPaddedButton* _removeButton;
	NSArray* _lastDetectedURLsForFetch;
	TFNTimer* _textChangeDetectionTimer;
	id<TFSTwitterAPICommandCancelling> _pendingRequest;
	T1NativeCardConsistencyChecker* _cardConsistencyChecker;
	double _detectionDelayInterval;

}

@property (assign,nonatomic,__weak) TFNPaddedButton * removeButton;                                   //@synthesize removeButton=_removeButton - In the implementation block
@property (nonatomic,retain) T1ComposeCardPreviewView * view; 
@property (nonatomic,retain) NSArray * lastDetectedURLsForFetch;                                      //@synthesize lastDetectedURLsForFetch=_lastDetectedURLsForFetch - In the implementation block
@property (assign,nonatomic) double detectionDelayInterval;                                           //@synthesize detectionDelayInterval=_detectionDelayInterval - In the implementation block
@property (nonatomic,retain) TFNTimer * textChangeDetectionTimer;                                     //@synthesize textChangeDetectionTimer=_textChangeDetectionTimer - In the implementation block
@property (retain) id<TFSTwitterAPICommandCancelling> pendingRequest;                                 //@synthesize pendingRequest=_pendingRequest - In the implementation block
@property (nonatomic,retain) T1NativeCardConsistencyChecker * cardConsistencyChecker;                 //@synthesize cardConsistencyChecker=_cardConsistencyChecker - In the implementation block
@property (assign,nonatomic,__weak) id<T1ComposeCardPreviewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) TFNTwitterAccount * account;                                             //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) TFNTwitterCardData * cardData;                                           //@synthesize cardData=_cardData - In the implementation block
@property (nonatomic,copy) NSString * clientAttachedCardURL;                                          //@synthesize clientAttachedCardURL=_clientAttachedCardURL - In the implementation block
@property (assign,nonatomic) char shouldFetchCard;                                                    //@synthesize shouldFetchCard=_shouldFetchCard - In the implementation block
-(TFNTwitterCardData *)cardData;
-(void)_didTapRemoveButton:(id)arg1 ;
-(void)setCardData:(TFNTwitterCardData *)arg1 ;
-(void)setRemoveButton:(TFNPaddedButton *)arg1 ;
-(T1NativeCardConsistencyChecker *)cardConsistencyChecker;
-(void)changeCardPreviewIfNeededForComposerText:(id)arg1 ;
-(void)setClientAttachedCardURL:(NSString *)arg1 ;
-(void)setShouldFetchCard:(char)arg1 ;
-(TFNTimer *)textChangeDetectionTimer;
-(id<TFSTwitterAPICommandCancelling>)pendingRequest;
-(void)_updateCardPreviewWithCardData:(id)arg1 ;
-(double)_msecToInterval:(int)arg1 ;
-(void)setDetectionDelayInterval:(double)arg1 ;
-(void)setCardConsistencyChecker:(T1NativeCardConsistencyChecker *)arg1 ;
-(void)_updateIfNeededForComposerText:(id)arg1 ;
-(double)detectionDelayInterval;
-(void)_fetchIfNeededForComposerText:(id)arg1 afterDelay:(double)arg2 ;
-(void)_fetchIfNeededForComposerText:(id)arg1 ;
-(void)_removeCardPreviewForReason:(unsigned)arg1 withCardData:(id)arg2 ;
-(char)_isCardEnabledForComposePreview:(id)arg1 ;
-(char)_isCardConsistent:(id)arg1 ;
-(void)_showCardPreviewWithCardData:(id)arg1 ;
-(char)_isPreviewDisplayed;
-(NSString *)clientAttachedCardURL;
-(id)_URLsInText:(id)arg1 ;
-(NSArray *)lastDetectedURLsForFetch;
-(void)setLastDetectedURLsForFetch:(NSArray *)arg1 ;
-(char)shouldFetchCard;
-(void)_makeCardPreviewRequestWithComposerText:(id)arg1 ;
-(void)_textChangeDetectionTimerDidFire:(id)arg1 ;
-(void)setTextChangeDetectionTimer:(TFNTimer *)arg1 ;
-(void)_animatedHideCardPreviewWithCompletion:(/*^block*/id)arg1 ;
-(void)setPendingRequest:(id<TFSTwitterAPICommandCancelling>)arg1 ;
-(void)_processFetchResponse:(id)arg1 error:(id)arg2 ;
-(id)_stringsFromText:(id)arg1 textEntities:(id)arg2 ;
-(void)setDelegate:(id<T1ComposeCardPreviewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<T1ComposeCardPreviewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(TFNPaddedButton *)removeButton;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(TFNTwitterAccount *)account;
@end

