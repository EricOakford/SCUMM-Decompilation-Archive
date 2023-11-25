include ".\nums.h"

scripts {
    boot-script                                                                     = 1
    sentence(current-verb:Verb, current-noun1:Object, current-noun2:Object)
        { sentence-actor:Actor, dest-object:Object, loc-5,
        reach-animation:Chore, give-prox }                                          = 2
    default-response(current-verb:Verb)                                             = 3
    build-sentence(clicked-zone:UserfaceZone,item:Any,button)
        { _, inv-index, _, exec-sentence-flag:Boolean }                             = 4 ; unfortunately, item is both keys and verbs here, hence "Any"
    enter-room2                                                                     = 5
; scripts 6-8 not defined
    get-preps(object-to-check:Object) { i:Class }                                   = 9
    update-inventory(new-object:Object) {
        i, obj:Object, icon-obj:Object,_,start, end, index, _, inv-verb:Verb }      = 10
    give-to-actor(obj:Object, give-actor:Actor, receive-actor:Actor, chore:Chore)   = 11
    give-to-object(give-object:Object, give-actor:Object)                           = 12
    revert-sentence                                                                 = 13
    display-sentence                                                                = 14
    one-second-update { rnd }                                                       = 15
; script 16 not defined
    get-dialog(clicked-zone:UserfaceZone, item:Verb) {
        _, _, _, obj, j }                                                           = 17 ; although get-dialog also chains key-pressed, other than that call, item is always verb
    define-verbs                                                                    = 18
    set-verbs(verb-state:UserfaceMode)                                              = 19
    start-cut-scene(level:CutSceneFlag)                                             = 20
    end-cut-scene(level:CutSceneFlag)                                               = 21
    key-pressed(which-key:Key) { which-key-hit:Key }                                = 22
    exit-room1                                                                      = 23
    fight-build-sentence(clicked-zone:UserfaceZone, item:Key)   
        { opp-right, opp-left, opp-y, _,
        opp-bot, opp-mid, opp-top, _,
        player-y, player-left, player-right,
        player-bot, player-mid, player-top }                                        = 24
    execute-fight-actions { distance }                                              = 25
; script 26 not defined
    calculate-indy-damage(power)                                                    = 27
    calculate-opponent-damage(power)                                                = 28
    manage-power-levels                                                             = 29
; script 30 not defined
    follow-actor(leader:Actor, follower:Actor, change-rooms:Boolean)                = 31
    get-touched-object(legal-class:Class, actor-check:Boolean)
        { touched-object:Object }                                                   = 32
    enter-room1                                                                     = 33
; scripts 34-44 not defined
    update-special-verbs                                                            = 45 ; commented out, but this is what it would do
    setup-fight(opponent:Actor, unused, loc-2) { _,_,_,opponent-x,player-x }        = 46
    handle-fight-input(distance) {last-action-was-step-back:Boolean,
        idle-action:FightAction,_, x, y }                                           = 47
    control-opponent-action-choice { x, y }                                         = 48
    indy-fight-stats { health-right, prev-health-right, y, 
        power-right, prev-power-right, music-triggered:Boolean }                    = 49
    opponent-fight-stats { health-right, prev-health-right, y, 
        power-right, prev-power-right, music-triggered:Boolean }                    = 50
    control-opponent-block                                                          = 51
    control-opponent-attack { _, action:FightAction, x, y }                         = 52
    check-opponent-power { right, i }                                               = 53
    check-opponent-health { right, i }                                              = 54
; scripts 55-56 not defined
    death-of-indy(cause:CauseOfDeath)                                               = 57
    death-build-sentence(clicked-zone:UserfaceZone,item:Key)                        = 58
    scan-for-icon { obj:Object, act:Actor, _, offset, _, _  }                       = 59
    lock-door(this-door:Object, other-door:Object)                                  = 60
    unlock-door(this-door:Object, other-door:Object)                                = 61
    open-door(this-door:Object, other-door:Object)                                  = 62
    close-door(this-door:Object, other-door:Object)                                 = 63
    use-door(which-door:Object)                                                     = 64
    walk-and-face(which-actor:Actor, x-dest, y-dest, facing, extra-anim:Chore)      = 65
    go-to-new-room(which-room:Room, x-offset, y-offset) { x, y }                    = 66
    watch-for-click(clicked-zone:UserfaceZone, item)                                = 67
    start-dialog { j:Verb, unused1, unused2 }                                       = 68
    walk-to-room { x, y, room:Room }                                                = 69
    script-*                                                                        = 70
; script 71 not defined
    fight(opp-actor:Actor, opp-costume:Costume, bounds-1, bounds-2,
        run-away-script:Script, _, in-position:Boolean) {
        prev-indy-costume:Costume, prev-opp-costume:Costume }                       = 72
    submarine-talk-to-actor                                                         = 73
    display-lucaslogo { i, rnd }                                                    = 74
    heal-indy { rnd }                                                               = 75
    move-to-fighting-positions(actor1:Actor, actor2:Actor) {
        x1, x2, y2, width1, width2, distance }                                      = 76
    strange-modulo                                                                  = 77 ; "strange" because it returns 0 when a < b (e.g. 4 % 5)
    full-screen-build-sentence(clicked-zone:UserfaceZone,item,button)               = 78
    full-screen-display-object-name                                                 = 79
    switch-actor(which-actor:Actor)                                                 = 80
; script 81 not defined
    begin-dialog-ui                                                                 = 82
    end-dialog-ui(keep-verbs:Boolean)                                               = 83
    dummy                                                                           = 84 ; just sets return-value = -1
    clear-flags { j }                                                               = 85 ; clear the flags array reused between rooms
    keep-facing-actor(focus-actor:Actor, watching-actor:Actor)                      = 86
    use-orichalcum-detector                                                         = 87
    labyrinth-talk-to-actor                                                         = 88
; script 89 not defined
    eat-sandwich                                                                    = 90
    make-sandwich                                                                   = 91
; script 92 not defined
    fade-credit(mode:Number) { i:PaletteIndex }                                     = 93
    display-credits-for(from-credit:Script, to-credit:Script)
        { current-credit-script:Script, mode:Number }                               = 94
    market-grocer-dialog(_) { junk-target-audience, junk-color }                    = 95
    market-sophia-dialog                                                            = 96
    talk-to-sophia-sans-necklace                                                    = 97 ; Used for talking to Sophia after her necklace has been destroyed
    pick-dialogue-passages                                                          = 98
    unused-script-1                                                                 = 99 ; Never called and no content
; scripts 100-105 not defined
    adjust-credits-display-duration                                                 = 106
    credits-text-speed                                                              = 107
    script-*                                                                        = 108 ; Plays some sound effect (183), then pauses it after 30 jiffies.
    script-*                                                                        = 109 ; Fades in a part in transformation-theme
    pan-transformation-music-with-animation                                         = 110
    script-*                                                                        = 111 ; More iMUSE, God Machine
    script-*                                                                        = 112 ; More iMUSE, God Machine
    script-*                                                                        = 113 ; More iMUSE, Outer Circle
    script-*                                                                        = 114 ; More iMUSE, Outer Circle
    maze-random-soldier-patrol                                                      = 115
    maze-random-soldier-patrol-2                                                    = 116
    check-soldier-distance                                                          = 117
    script-*                                                                        = 118
    autosave-current-room(go-room:Room, save-load:SaveLoadFlags)                    = 119
    script-*                                                                        = 120 ; dialog etc. Sophia in labyrinth pit
    rescue-sophia                                                                   = 121 ; in labyrinth
; script 122 not defined
    assess-collection(collection:CollegeCollection)                                 = 123
    stalactite-attack                                                               = 124
    script-*                                                                        = 125
    script-*                                                                        = 126
    script-*                                                                        = 127
    script-*                                                                        = 128
    script-*                                                                        = 129
    
    setup-inventory-verbs { row, column, inv-verb:Verb, x, y }                      = 132
    follow-actor-2(leader:Actor, follower:Actor, change-rooms:Boolean)              = 133 ; TODO: Find better name - called by follow-actor

    aim-orichalcum-detector                                                         = 135
    
    script-*(which-actor:Actor, to-actor:Actor, dist:Number, _)
        { x:Number }                                                                = 136
    charge-statue                                                                   = 137
    make-charged-comb-on-string                                                     = 142
    award-iq-points(key:Number, points:Number) { already-awarded:Number }           = 144
    calculate-total-iq-points { key:Number, total:Number, current:Number, changed:Boolean } = 145
    
    display-indy-quotient { current-verb:Verb }                                     = 150
    
    script-* { v:Verb }                                                             = 156
    
    look-at-junk                                                                    = 159 ; or mask
    new-york-music-control {
        current-beat, p3-vol, p4-vol, p5-vol, p9-vol, p9-vol-ROL }                  = 160
    default-look-at-actor                                                           = 161
    global-look-at-sophia                                                           = 162
    give-to-actor2(give-object:Object, sentence-actor:Actor,
        give-actor:Object)                                                          = 163	;EO: This can't be right
        
    animate-sparkle(actor:Actor, x:Coordinate, y:Coordinate, twinkle-chance:Number,
        scaling:Number, zclip:Number) { rnd:Number }                                = 164
    discharge-rubber-comb                                                           = 165
}

local-scripts {
    atl1-entrance { ;EO: This room's list of local scripts is different than that of the full game.
        entered-script                                                                  = 201
        welcome-to-atlantis                                                             = 202
        let-there-be-light                                                              = 203
        do-broken-stairs                                                                = 204
        climb-the-ladder                                                                = 205
        put-ladder-in-place                                                             = 206
        rename-objects-after-light                                                      = 208
        train-has-arrived                                                               = 209
        stone-disk-result                                                               = 214
    }

    college-catroom {
        land-in-catroom { indy-ele, other-ele, i:Script }                               = 200
        cat-surprise                                                                    = 201
        
        credit-theme-music                                                              = 209
        credit-original-music                                                           = 210
        name-williams                                                                   = 211
        name-bajakian                                                                   = 212
        name-mcconnell                                                                  = 213
        name-land                                                                       = 214
        
        credits-override(do-override:Boolean)                                           = 216
    }

   cu-plato {
       clicked-on-book                                                                  = 200
       turn-to-passage-1                                                                = 201
       turn-to-passage-2                                                                = 202
       turn-to-passage-3                                                                = 203
       turn-to-passage-4                                                                = 204
       turn-to-passage-5                                                                = 205
    }
    
    logo {
        ending-logo-animation                                                           = 200
    }
        
    salvage-boat {
        kerner-is-here                                                                  = 200
        compressor-is-running                                                           = 201
        turn-off-compressor                                                             = 202
        talk-to-actor                                                                   = 203
        we-have-arrived                                                                 = 204
	talk-to-sophia                                                                  = 205
        talk-to-captain                                                                 = 206
        drop-indy-into-sea                                                              = 207
        shirt-waves                                                                     = 208
        indy-puts-on-suit                                                               = 209
        unused-210                                                                      = 210
        talk-to-suited-indy                                                             = 211
        fix-diving-suit                                                                 = 212
        turn-on-compressor                                                              = 213
    }

    salvage-boat-underwater {
        drown-timer                                                                     = 200
        diving-in                                                                       = 201
        sink-to-the-bottom                                                              = 202
    }
    
    thera-dock {
        set-up-room                                                                     = 200
        port-authority-wanders                                                          = 201
        cant-take-basket                                                                = 202
        cant-open-crate                                                                 = 203
        talk-to-actor                                                                   = 204
        talk-to-port-authority                                                          = 205
        talk-to-sophia                                                                  = 206
        first-arrive-fists                                                              = 207
        talk-to-captain                                                                 = 208
        captain-wanders                                                                 = 209
        sophia-taken-to-sub                                                             = 213
        give-to-port-authority                                                          = 217
    }

    thera-dig-exterior {
        set-up-items                                                                    = 200
        balloon-inflates                                                                = 201
        after-kerner                                                                    = 202
    }
    
    thera-landscape {
        balloon-leaves-thera                                                            = 200
        check-mountain-path(destination:Object)                                         = 201
        check-indy-distance                                                             = 202
    }
    
    world-map {
        set-up-map                                                                      = 200

        draw-trail-line(par0, par1, par2, par3, par4, par5, jiffies)
            { loc-7, loc-8, loc-9, loc-10, loc-11, loc-12, loc-13, loc-14,
            loc-15, backup-min-jiffies }                                                = 203
        map-build-sentence(clicked-zone:UserfaceZone,item:Key)                          = 204
            
        travel-to(destination:Object)                                                   = 206

        demo-copyright-notice                                                           = 208
    }
}
