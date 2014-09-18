/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureSessionInternal_FigRecorder, NSArray, NSString;

@interface AVCaptureSession_FigRecorder : NSObject {
    AVCaptureSessionInternal_FigRecorder *_internal;
}

@property bool automaticallyConfiguresApplicationAudioSession;
@property(readonly) NSArray * inputs;
@property(getter=isInterrupted,readonly) bool interrupted;
@property(readonly) struct OpaqueCMClock { }* masterClock;
@property(readonly) NSArray * outputs;
@property(getter=isRunning,readonly) bool running;
@property(copy) NSString * sessionPreset;
@property bool usesApplicationAudioSession;

+ (id)_createCaptureOptionsForPreset:(id)arg1 audioDevice:(id)arg2 videoDevice:(id)arg3 errorStatus:(int*)arg4;
+ (id)allSessionPresets;
+ (bool)automaticallyNotifiesObserversOfMasterClock;
+ (id)avCaptureSessionPlist;
+ (void)initialize;
+ (id)publicSessionPresets;

- (void)_addConnection:(id)arg1;
- (id)_addFastSwitchOptionsToCaptureOptions:(id)arg1 forDevice:(id)arg2 preset:(id)arg3;
- (void)_addInputWithNoConnections:(id)arg1;
- (void)_addOutputWithNoConnections:(id)arg1;
- (void)_beginConfiguration;
- (bool)_buildAndRunGraph;
- (bool)_canAddConnection:(id)arg1 failureReason:(id*)arg2;
- (bool)_canAddInput:(id)arg1 failureReason:(id*)arg2;
- (bool)_canAddOutput:(id)arg1 failureReason:(id*)arg2;
- (void)_commitConfiguration;
- (id)_connectionsForNewInputPort:(id)arg1;
- (id)_connectionsForNewOutput:(id)arg1;
- (id)_connectionsForNewVideoPreviewLayer:(id)arg1;
- (int)_createRecorderIfNeeded;
- (id)_currentDeviceWithMediaType:(id)arg1;
- (void)_determineMasterClock;
- (void)_doDidStart:(bool)arg1;
- (void)_doDidStartSources;
- (void)_doDidStop:(id)arg1;
- (void)_doWillStart;
- (id)_errorForFigRecorderNotification:(id)arg1;
- (void)_excludeOutputsForCaptureOptions:(id)arg1;
- (bool)_figRecorderOldOptionsAreEqual:(id)arg1 toNewOptions:(id)arg2 livesourceOptionsAreEqual:(bool*)arg3 frameRatesChanged:(bool*)arg4;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (id)_liveConnections;
- (void)_postRuntimeError:(id)arg1;
- (void)_rebuildGraph;
- (void)_rebuildInternalCaptureOptions;
- (void)_rebuildLiveConnections;
- (void)_removeConnection:(id)arg1;
- (void)_removeConnectionsForInputPort:(id)arg1;
- (void)_removeVideoPreviewLayerConnectionsForInputPort:(id)arg1;
- (id)_resolvedCaptureOptions;
- (id)_resolvedCaptureOptionsByApplyingOverridesToCaptureOptions:(id)arg1 preset:(id)arg2;
- (id)_resolvedCaptureOptionsForPreset:(id)arg1 audioDevice:(id)arg2 videoDevice:(id)arg3;
- (bool)_sessionHasEnabledMovieFileOutput;
- (void)_setInterrupted:(bool)arg1;
- (void)_setMasterClock:(struct OpaqueCMClock { }*)arg1;
- (void)_setRunning:(bool)arg1;
- (bool)_startPreviewing;
- (int)_startRecording;
- (void)_stopAndTearDownGraph;
- (id)_stopError;
- (bool)_stopPreviewing;
- (int)_stopRecording;
- (void)_teardownFigRecorder;
- (void)addConnection:(id)arg1;
- (void)addInput:(id)arg1;
- (void)addInputWithNoConnections:(id)arg1;
- (void)addOutput:(id)arg1;
- (void)addOutputWithNoConnections:(id)arg1;
- (void)addVideoPreviewLayer:(id)arg1;
- (void)addVideoPreviewLayerConnection:(id)arg1;
- (bool)automaticallyConfiguresApplicationAudioSession;
- (void)beginConfiguration;
- (bool)canAddConnection:(id)arg1;
- (bool)canAddInput:(id)arg1;
- (bool)canAddOutput:(id)arg1;
- (bool)canSetSessionPreset:(id)arg1;
- (id)captureOptions;
- (void)commitConfiguration;
- (void)dealloc;
- (id)description;
- (id)figRecorderOptions;
- (id)init;
- (id)inputWithClass:(Class)arg1;
- (id)inputs;
- (bool)isBeingConfigured;
- (bool)isInterrupted;
- (bool)isKindOfClass:(Class)arg1;
- (bool)isPreviewing;
- (bool)isRunning;
- (struct OpaqueCMClock { }*)masterClock;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)outputWithClass:(Class)arg1;
- (id)outputs;
- (struct OpaqueFigRecorder { }*)recorder;
- (void)removeConnection:(id)arg1;
- (void)removeInput:(id)arg1;
- (void)removeOutput:(id)arg1;
- (void)removeVideoPreviewLayer;
- (void)removeVideoPreviewLayerConnection:(id)arg1;
- (id)sessionPreset;
- (void)setAutomaticallyConfiguresApplicationAudioSession:(bool)arg1;
- (void)setSessionPreset:(id)arg1;
- (void)setUsesApplicationAudioSession:(bool)arg1;
- (void)setVideoPreviewLayer:(id)arg1;
- (void)startRunning;
- (void)stopRunning;
- (bool)usesApplicationAudioSession;
- (id)valueForUndefinedKey:(id)arg1;
- (id)videoPreviewLayer;

@end